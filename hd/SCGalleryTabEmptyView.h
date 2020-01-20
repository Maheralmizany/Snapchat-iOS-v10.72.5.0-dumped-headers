//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCLoadingIndicatorView, SCMemoriesRoundButton, UILabel;

@interface SCGalleryTabEmptyView : UIView
{
    UIView *_containerView;
    UIView *_labelsContainer;
    UILabel *_placeholderTitle;
    UILabel *_placeholderDesc;
    SCMemoriesRoundButton *_actionButton;
    SCLoadingIndicatorView *_loadingIndicator;
    id <SCGalleryTabEmptyViewDelegate> _delegate;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <SCGalleryTabEmptyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_actionButtonTapped;
- (id)initWithType:(unsigned long long)arg1;

@end
