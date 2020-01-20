//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface SCOperaSubscriptionConfiguration : NSObject
{
    unsigned long long _subscriptionButtonState;
    UIColor *_subscriptionPrimaryColor;
    UIColor *_subscriptionSecondaryColor;
    UIColor *_subscriptionBarColor;
    NSString *_subscriptionIconKey;
    NSString *_subscribeButtonTitle;
    NSString *_unsubscribeButtonTitle;
    NSString *_loadingButtonTitle;
    NSString *_reverseLoadingButtonTitle;
    id <SCOperaSubscriptionChecker> _subscriptionChecker;
    long long _subscriptionMethod;
}

@property(readonly, nonatomic) long long subscriptionMethod; // @synthesize subscriptionMethod=_subscriptionMethod;
@property(retain, nonatomic) id <SCOperaSubscriptionChecker> subscriptionChecker; // @synthesize subscriptionChecker=_subscriptionChecker;
@property(readonly, copy, nonatomic) NSString *reverseLoadingButtonTitle; // @synthesize reverseLoadingButtonTitle=_reverseLoadingButtonTitle;
@property(readonly, copy, nonatomic) NSString *loadingButtonTitle; // @synthesize loadingButtonTitle=_loadingButtonTitle;
@property(readonly, copy, nonatomic) NSString *unsubscribeButtonTitle; // @synthesize unsubscribeButtonTitle=_unsubscribeButtonTitle;
@property(readonly, copy, nonatomic) NSString *subscribeButtonTitle; // @synthesize subscribeButtonTitle=_subscribeButtonTitle;
@property(readonly, copy, nonatomic) NSString *subscriptionIconKey; // @synthesize subscriptionIconKey=_subscriptionIconKey;
@property(readonly, nonatomic) UIColor *subscriptionBarColor; // @synthesize subscriptionBarColor=_subscriptionBarColor;
@property(readonly, nonatomic) UIColor *subscriptionSecondaryColor; // @synthesize subscriptionSecondaryColor=_subscriptionSecondaryColor;
@property(readonly, nonatomic) UIColor *subscriptionPrimaryColor; // @synthesize subscriptionPrimaryColor=_subscriptionPrimaryColor;
@property(readonly, nonatomic) unsigned long long subscriptionButtonState; // @synthesize subscriptionButtonState=_subscriptionButtonState;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithProperties:(id)arg1;

@end

