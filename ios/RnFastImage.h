
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRnFastImageSpec.h"

@interface RnFastImage : NSObject <NativeRnFastImageSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RnFastImage : NSObject <RCTBridgeModule>
#endif

@end
