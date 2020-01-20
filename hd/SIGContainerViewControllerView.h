//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SIGContainerView, SIGFooter, UIColor;

@interface SIGContainerViewControllerView : UIView
{
    SIGContainerView *_activeContainer;
    SIGContainerView *_backgroundContainer;
    SIGFooter *_footer;
}

@property(readonly, nonatomic) SIGFooter *footer; // @synthesize footer=_footer;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *containerBackgroundColor;
- (id)presentationContextForPresenting:(id)arg1 usingStyle:(id)arg2;
- (void)_endNonModalPresentation:(id)arg1 completed:(_Bool)arg2;
- (void)_beginNonModalPresentation:(id)arg1;
- (void)_endModalPresentation:(id)arg1 completed:(_Bool)arg2;
- (void)_beginModalPresentation:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

