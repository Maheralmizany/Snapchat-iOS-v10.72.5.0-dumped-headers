//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAChatDrawerAction : SCAUserTrackedEvent
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setWithSearch:(_Bool)arg1;
- (void)setWithBitmojiTabVisible:(_Bool)arg1;
- (void)setSource:(long long)arg1;
- (void)setSection:(id)arg1;
- (void)setPreviewIconProvider:(long long)arg1;
- (void)setItemSentCount:(long long)arg1;
- (void)setDrawerViewMode:(long long)arg1;
- (void)setDrawerActionType:(long long)arg1;
- (void)setDrawer:(long long)arg1;
- (void)setBloopsChatDrawerActionMetadata:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

