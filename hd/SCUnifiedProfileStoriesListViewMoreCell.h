//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUnifiedProfileBaseCollectionViewCell.h"

#import "SCSectionKitCollectionViewViewMoreActionable.h"
#import "SCViewModelConfigurable.h"

@class NSString, UILabel;

@interface SCUnifiedProfileStoriesListViewMoreCell : SCUnifiedProfileBaseCollectionViewCell <SCViewModelConfigurable, SCSectionKitCollectionViewViewMoreActionable>
{
    UILabel *_titleLabel;
    id _viewModel;
    id <SCSectionKitCollectionViewViewMoreActionableDelegate> _delegate;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(nonatomic) __weak id <SCSectionKitCollectionViewViewMoreActionableDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_didSingleTap:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

