//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCPhoneCodeScope : NSObject
{
    NSString *_phoneReceivingCode;
    unsigned long long _initialCodeDeliveryMechanism;
    id <SCPhoneCodeVerifier> _codeVerifier;
    id <SCPhoneCodeDelegate> _delegate;
    id <SCUIContainer> _uiContainer;
}

@property(readonly, nonatomic) id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
@property(readonly, nonatomic) __weak id <SCPhoneCodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SCPhoneCodeVerifier> codeVerifier; // @synthesize codeVerifier=_codeVerifier;
@property(readonly, nonatomic) unsigned long long initialCodeDeliveryMechanism; // @synthesize initialCodeDeliveryMechanism=_initialCodeDeliveryMechanism;
@property(readonly, nonatomic) NSString *phoneReceivingCode; // @synthesize phoneReceivingCode=_phoneReceivingCode;
- (void).cxx_destruct;
- (id)initWithPhoneReceivingCode:(id)arg1 initialCodeDeliveryMechanism:(unsigned long long)arg2 codeVerifier:(id)arg3 delegate:(id)arg4 uiContainer:(id)arg5;

@end

