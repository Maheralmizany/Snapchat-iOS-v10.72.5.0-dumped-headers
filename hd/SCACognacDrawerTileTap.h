//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCACognacDrawerEventBase.h"

@interface SCACognacDrawerTileTap : SCACognacDrawerEventBase
{
}

- (void)setTileActionType:(long long)arg1;
- (void)setRanking:(long long)arg1;
- (void)setIsUpdate:(_Bool)arg1;
- (void)setIsNew:(_Bool)arg1;
- (void)setCognacId:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

