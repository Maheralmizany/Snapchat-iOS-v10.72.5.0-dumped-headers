//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCConversationSnapStateByParticipant : NSObject <NSCopying>
{
    BOOL _screenCaptureType;
    BOOL _replayState;
    NSString *_participant;
    double _viewedTimestampInEpochSecs;
}

@property(readonly, nonatomic) BOOL replayState; // @synthesize replayState=_replayState;
@property(readonly, nonatomic) BOOL screenCaptureType; // @synthesize screenCaptureType=_screenCaptureType;
@property(readonly, nonatomic) double viewedTimestampInEpochSecs; // @synthesize viewedTimestampInEpochSecs=_viewedTimestampInEpochSecs;
@property(readonly, copy, nonatomic) NSString *participant; // @synthesize participant=_participant;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParticipant:(id)arg1 viewedTimestampInEpochSecs:(double)arg2 screenCaptureType:(BOOL)arg3 replayState:(BOOL)arg4;

@end

