//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCTLocalMediaViewListener.h"

@class NSString, SCTLocalMediaView, UIButton, UIImageView, UILabel;

@interface SCTCallCardIncomingCallAccessory : UIView <SCTLocalMediaViewListener>
{
    UIImageView *_onboardingIconView;
    SCTLocalMediaView *_localMediaView;
    struct SCTLocalMediaViewTraits _savedLocalMediaViewTraits;
    UIView *_whiteMaskView;
    unsigned long long _type;
    UIButton *_button;
    UILabel *_label;
}

@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_createOnboardingIconView;
- (id)_createRejectButton;
- (id)_createAcceptButton;
- (void)localMediaView:(id)arg1 didMoveToSuperview:(id)arg2;
- (void)localMediaView:(id)arg1 willMoveToSuperview:(id)arg2;
- (void)mediaChangedInLocalMediaView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)attachLocalMediaView:(id)arg1;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
