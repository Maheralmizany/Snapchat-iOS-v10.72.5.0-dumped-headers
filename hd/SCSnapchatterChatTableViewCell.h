//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCActionMenuRenderableCell.h"
#import "SCSnapchatterCardViewDelegate.h"

@class SCSnapchatterCardView, UIViewController<SCChatCellPublisherGestureDelegate>;

@interface SCSnapchatterChatTableViewCell : SCSavableItemChatTableViewCell <SCSnapchatterCardViewDelegate, SCActionMenuRenderableCell>
{
    SCSnapchatterCardView *_snapchatterCardView;
    UIViewController<SCChatCellPublisherGestureDelegate> *_parentVC;
}

- (void).cxx_destruct;
- (void)resetWithOriginalContent;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (void)snapchatterNameCardView:(id)arg1 didTapForSnapchatter:(id)arg2;
- (void)snapchatterNameCardView:(id)arg1 didToggleButtonForUsername:(id)arg2;
- (void)renderPayload;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 userSession:(id)arg4;
- (id)snapchatterViewModel;

@end

