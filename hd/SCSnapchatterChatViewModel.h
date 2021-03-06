//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

@class NSString, SCSnapchatterCardViewModel;

@interface SCSnapchatterChatViewModel : SCSavableItemChatViewModel
{
    SCSnapchatterCardViewModel *_snapchatterMediaCardViewModel;
    NSString *_snapchatterId;
}

@property(readonly, copy, nonatomic) NSString *snapchatterId; // @synthesize snapchatterId=_snapchatterId;
@property(readonly, nonatomic) SCSnapchatterCardViewModel *snapchatterMediaCardViewModel; // @synthesize snapchatterMediaCardViewModel=_snapchatterMediaCardViewModel;
- (void).cxx_destruct;
- (double)bodyContentWidth;
- (double)payloadVerticalMargin;
- (double)payloadHeight;
- (_Bool)isEqual:(id)arg1;
- (id)_snapchatterForMessage:(id)arg1 messageMetadata:(id)arg2;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)reusableCellIdentifier;

@end

