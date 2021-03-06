/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CECBusPollingOperation : NSObject {
    <CECBusPollingOperationDelegate> *_delegate;
    unsigned char _initiatorAddress;
    CECInterface *_interface;
    unsigned char _pollingAddress;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) <CECBusPollingOperationDelegate> *delegate;

- (void)continuePolling;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithInterface:(id)arg1 initiator:(unsigned char)arg2 queue:(id)arg3;
- (void)poll;
- (void)setDelegate:(id)arg1;
- (void)startPolling;
- (void)stopPolling;

@end
