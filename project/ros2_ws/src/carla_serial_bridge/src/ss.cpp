#include <iostream>
#include <cstdint>
#include <cstring>

using namespace std;

typedef union{
  float f;
  uint8_t bytes[4];
} float_bytes;

int main(){

    uint8_t ss_state = 0;
    float_bytes trottle_rx;
    float_bytes steering_rx;
    float_bytes brake_rx;
    uint8_t hand_brake_rx;
    uint8_t manual_shift_rx;
    uint8_t reverse_rx;
    uint8_t gear_rx;

    // #Tf[0:3]Sf[0:3]Bf[0:3]HbRbGiMb$
    char msg[100];
    sprintf(msg, "#T%fS%fB%fH%dR%dG%dM%d$",11.11,22.22,33.33,1,1,23,1);

    for(int i = 0; i<strlen(msg); i++){
        cout << i << endl;
        switch (ss_state){
        case 0:
            if('#' == (uint8_t) msg[i]){
                ss_state = 1;
            }
            break;
        
        case 1:
            switch ((uint8_t) msg[i]){
                case 'T':
                    ss_state = 20;
                    break;
                case 'S':
                    ss_state = 30;
                    break;
                case 'B':
                    ss_state = 40;
                    break;
                case 'H':
                    ss_state = 50;
                    break;
                case 'M':
                    ss_state = 60;
                    break;
                case 'R':
                    ss_state = 70;
                    break;
                case 'G':
                    ss_state = 80;
                    break;
                case '$':
                    ss_state = 0;
                    break;
                
                default:
                    break;
            }
            break;
        
        
        case 20:
            trottle_rx.bytes[0] = (uint8_t) msg[i];
            ss_state = 21;
            break;
        
        
        case 21:
            trottle_rx.bytes[1] = (uint8_t) msg[i];
            ss_state = 22;
            break;
        
        
        case 22:
            trottle_rx.bytes[2] = (uint8_t) msg[i];
            ss_state = 23;
            break;
        
        
        case 23:
            trottle_rx.bytes[3] = (uint8_t) msg[i];
            ss_state = 1;
            break;
        
        
        case 30:
            steering_rx.bytes[0] = (uint8_t) msg[i];
            ss_state = 31;
            break;
        
        
        case 31:
            steering_rx.bytes[1] = (uint8_t) msg[i];
            ss_state = 32;
            break;
        
        
        case 32:
            steering_rx.bytes[2] = (uint8_t) msg[i];
            ss_state = 33;
            break;
        
        
        case 33:
            steering_rx.bytes[3] = (uint8_t) msg[i];
            ss_state = 1;
            break;
        
        
        case 40:
            brake_rx.bytes[0] = (uint8_t) msg[i];
            ss_state = 41;
            break;
        
        
        case 41:
            brake_rx.bytes[1] = (uint8_t) msg[i];
            ss_state = 42;
            break;
        
        
        case 42:
            brake_rx.bytes[2] = (uint8_t) msg[i];
            ss_state = 43;
            break;
        
        
        case 43:
            brake_rx.bytes[3] = (uint8_t) msg[i];
            ss_state = 1;
            break;
        
        
        case 50:
            hand_brake_rx = (uint8_t) msg[i];
            ss_state = 1;            
            break;
        
        
        case 60:
            manual_shift_rx = (uint8_t) msg[i];
            ss_state = 1;            
            break;
        
        
        case 70:
            reverse_rx = (uint8_t) msg[i];
            ss_state = 1;            
            break;
        
        
        case 80:
            gear_rx = (uint8_t) msg[i];
            ss_state = 1;            
            break;
        
        default:
            break;
        }
    }

    cout << msg << endl
         << trottle_rx.f << endl;


}