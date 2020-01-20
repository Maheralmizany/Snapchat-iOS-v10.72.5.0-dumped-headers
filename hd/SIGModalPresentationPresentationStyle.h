//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SIGPresentationStyle.h"

@class NSString, UIView;

@interface SIGModalPresentationPresentationStyle : NSObject <SIGPresentationStyle>
{
    UIView *_shadow;
}

- (void).cxx_destruct;
- (void)completeInContext:(id)arg1;
- (void)performAnimationsInContext:(id)arg1;
- (void)setupInContext:(id)arg1;
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) long long headerAnimationStyle;
@property(readonly, nonatomic) long long footerAnimationStyle;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) _Bool modal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

