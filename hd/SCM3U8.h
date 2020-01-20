//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSString, SCLazy;

@interface SCM3U8 : NSObject <NSCopying>
{
    SCLazy *_urls;
    SCLazy *_segments;
    SCLazy *_variants;
    SCLazy *_iframeVariants;
    SCLazy *_playlistType;
    NSString *_string;
}

+ (id)mediaM3U8WithHeaderSegment:(id)arg1 mediaSegments:(id)arg2 targetDuration:(double)arg3;
+ (id)mainM3U8WithBitrate:(unsigned long long)arg1 averageBitrate:(unsigned long long)arg2 resolution:(struct CGSize)arg3 framerate:(double)arg4 mediaM3U8URL:(id)arg5;
@property(readonly, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)M3U8ByResolvingAgainstBaseURL:(id)arg1;
- (id)M3U8ByUpdatingURLsWithURLs:(id)arg1;
- (id)M3U8ByUpdatingURLsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long playlistType;
@property(readonly, nonatomic) NSArray *iframeVariants;
@property(readonly, nonatomic) NSArray *variants;
@property(readonly, nonatomic) NSArray *segments;
@property(readonly, nonatomic) NSArray *urls;
@property(readonly, nonatomic) NSData *data;
- (id)initWithString:(id)arg1;
- (id)initWithData:(id)arg1;

@end

