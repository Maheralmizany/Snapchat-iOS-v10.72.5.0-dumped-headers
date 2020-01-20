//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCCognacLeaderboardPodiumEntryViewModel, SCNetworkImage;

@interface SCCognacLeaderboardPodiumViewModel : NSObject <NSCopying>
{
    SCNetworkImage *_podium;
    SCCognacLeaderboardPodiumEntryViewModel *_firstEntryViewModel;
    SCCognacLeaderboardPodiumEntryViewModel *_secondEntryViewModel;
    SCCognacLeaderboardPodiumEntryViewModel *_thirdEntryViewModel;
}

@property(readonly, copy, nonatomic) SCCognacLeaderboardPodiumEntryViewModel *thirdEntryViewModel; // @synthesize thirdEntryViewModel=_thirdEntryViewModel;
@property(readonly, copy, nonatomic) SCCognacLeaderboardPodiumEntryViewModel *secondEntryViewModel; // @synthesize secondEntryViewModel=_secondEntryViewModel;
@property(readonly, copy, nonatomic) SCCognacLeaderboardPodiumEntryViewModel *firstEntryViewModel; // @synthesize firstEntryViewModel=_firstEntryViewModel;
@property(readonly, copy, nonatomic) SCNetworkImage *podium; // @synthesize podium=_podium;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPodium:(id)arg1 firstEntryViewModel:(id)arg2 secondEntryViewModel:(id)arg3 thirdEntryViewModel:(id)arg4;

@end

