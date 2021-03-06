//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCChatActionMenuHeaderViewModel, SCPieView, UILabel;

@interface SCChatActionMenuHeaderView : UIView
{
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    SCPieView *_expiresPieView;
    id <SCChatMessageViewModel><SCMessageChatCellViewConfig> _messageViewModel;
    SCChatActionMenuHeaderViewModel *_viewModel;
}

@property(retain, nonatomic) SCChatActionMenuHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCChatMessageViewModel><SCMessageChatCellViewConfig> messageViewModel; // @synthesize messageViewModel=_messageViewModel;
- (void).cxx_destruct;
- (void)setTimestampHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

