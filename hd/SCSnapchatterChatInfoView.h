//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCSnapchatterViewModelConfigurable.h"

@class NSString, SCLazy, UILabel;

@interface SCSnapchatterChatInfoView : UIView <SCSnapchatterViewModelConfigurable>
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    SCLazy *_secondaryIconImageView;
    id _viewModel;
}

@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

