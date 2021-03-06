//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface SCMusicTrackList : NSObject <NSCopying>
{
    int _trackListId;
    NSArray *_tracks;
}

@property(readonly, copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) int trackListId; // @synthesize trackListId=_trackListId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTrackListId:(int)arg1 tracks:(id)arg2;

@end

