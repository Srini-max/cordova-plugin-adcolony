#import <Cordova/CDV.h>


@interface AdColonyPlugin : CDVPlugin{

	Boolean rewardCallBackReady;

}

- (void) configureWithAppID:(CDVInvokedUrlCommand*) command;


@end
