
//#if __has_include("RCTBridgeModule.h")
//#import "RCTBridgeModule.h"
//#else
//#import <React/RCTBridgeModule.h>
//#endif
//
//@interface RNNativeToastLibrary : NSObject <RCTBridgeModule>
//
//@end


#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNNativeToastLibrary : NSObject
-(void) showToast:(NSString*) msg;
-(void) showToast:(NSString*) msg duration:(double) duration;
@end

NS_ASSUME_NONNULL_END
