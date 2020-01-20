//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCRoundedCornerConfigurable.h"
#import "SCViewModelConfigurable.h"

@class NSString, SCShapeView, UILabel;

@interface SCSearchSeeMoreView : UIView <SCViewModelConfigurable, SCRoundedCornerConfigurable>
{
    SCShapeView *_backgroundView;
    UILabel *_viewMoreLabel;
    _Bool _highlighted;
    id _viewModel;
    unsigned long long _roundedCorners;
    id <SCSearchSeeMoreViewDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) __weak id <SCSearchSeeMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_onTap;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

