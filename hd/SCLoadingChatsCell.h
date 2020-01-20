//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface SCLoadingChatsCell : UITableViewCell
{
    id <SCChatMessageViewModel><SCChatLoadingCellViewConfig> _viewModel;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_label;
    long long _loadingStatus;
    UIImageView *_retryIcon;
}

@property(retain, nonatomic) UIImageView *retryIcon; // @synthesize retryIcon=_retryIcon;
@property(nonatomic) long long loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) id <SCChatMessageViewModel><SCChatLoadingCellViewConfig> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setReloadable;
- (void)setLoading;
- (id)labelFontWithSize:(long long)arg1;
- (id)labelTextColor;
- (void)layoutCell;
- (void)initializeLabel;
- (void)initializeActivityIndicator;
- (void)initializeRetryIcon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

