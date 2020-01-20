//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCHeaderDataSource.h"

@class NSString, SCHeader, SCPrivacyPolicyContentScrollView, UIButton;

@interface SCPrivacyPolicyView : UIView <SCHeaderDataSource>
{
    SCHeader *_header;
    SCPrivacyPolicyContentScrollView *_contentScrollView;
    UIButton *_okButton;
}

- (void).cxx_destruct;
- (id)titleForHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)backgroundColorForHeader;
- (void)_initOKButtonWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)_initContentScrollViewWithLinkDelegate:(id)arg1 resourceImage:(id)arg2;
- (void)_initHeaderWithDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 headerDelegate:(id)arg2 dismissActionDelegate:(id)arg3 linkDelegate:(id)arg4 resourceImageFuture:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
