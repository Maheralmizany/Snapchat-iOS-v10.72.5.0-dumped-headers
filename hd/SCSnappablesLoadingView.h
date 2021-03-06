//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCLoadingIndicatorView, UILabel, UIVisualEffectView;

@interface SCSnappablesLoadingView : UIView
{
    UIVisualEffectView *_blurView;
    UIView *_container;
    SCLoadingIndicatorView *_spinner;
    UILabel *_title;
    UIView *_cancelButton;
    id <SCSnappablesLoadingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCSnappablesLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapped:(id)arg1;
- (void)_buildView;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

