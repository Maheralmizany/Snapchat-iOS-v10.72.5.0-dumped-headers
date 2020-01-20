//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAlertViewActionController.h"

@class NSString, UITextView, UIView;

@interface SCAlertViewActionTextViewController : NSObject <SCAlertViewActionController>
{
    UIView *_containerView;
    unsigned long long _style;
    UITextView *_textView;
}

+ (id)_backgroundColorWithStyle:(unsigned long long)arg1;
+ (id)actionWithStyle:(unsigned long long)arg1 configuration:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (_Bool)requiresAdditionalPaddingIfLastItem;
- (struct UIEdgeInsets)edgeInsets;
- (void)becomeFirstResponder;
- (_Bool)adjustsSizeToMatchStandard;
- (unsigned long long)alertViewActionType;
- (id)actionView;
- (struct CGSize)actionViewSize;
- (void)_setUpContainerView:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1 configuration:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

