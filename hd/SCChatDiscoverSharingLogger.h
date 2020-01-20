//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SCDiscoverMediaBlobMetadata;

@interface SCChatDiscoverSharingLogger : NSObject
{
    NSMutableDictionary *_loggedStateSession;
    _Bool _isFullyViewed;
    long long _isSnapAvailable;
    long long _isEditionAvailable;
    double _snapDuration;
    double _startTime;
    SCDiscoverMediaBlobMetadata *_messageMetadata;
}

+ (id)shared;
@property(copy, nonatomic) SCDiscoverMediaBlobMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double snapDuration; // @synthesize snapDuration=_snapDuration;
@property(nonatomic) _Bool isFullyViewed; // @synthesize isFullyViewed=_isFullyViewed;
@property(nonatomic) long long isEditionAvailable; // @synthesize isEditionAvailable=_isEditionAvailable;
@property(nonatomic) long long isSnapAvailable; // @synthesize isSnapAvailable=_isSnapAvailable;
- (void).cxx_destruct;
- (_Bool)_containsVideo:(id)arg1;
- (id)stringForDSnapLinkableState:(unsigned long long)arg1;
- (id)_newDiscoverSnapLoggedSessionMaybe:(id)arg1;
- (void)dSnapFullScreenVidDidPlay:(id)arg1 withError:(_Bool)arg2;
- (void)dSnapFullScreenVidLoadDidStart:(id)arg1;
- (void)dSnapThumbnailVidDidPlay:(id)arg1 withError:(_Bool)arg2;
- (void)dSnapThumbnailVidLoadDidStart:(id)arg1;
- (void)didTapDiscoverBarForDSnap:(id)arg1 linkState:(long long)arg2 linkInfo:(id)arg3;
- (void)viewEnded;
- (void)_viewEndedWithMetadata:(id)arg1;
- (void)viewReleasedForMetadata:(id)arg1;
- (void)viewStartedForMetadata:(id)arg1;
- (id)init;

@end

