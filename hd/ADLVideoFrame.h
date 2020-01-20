//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface ADLVideoFrame : NSObject
{
    int _width;
    int _height;
    int _stride0;
    int _stride1;
    int _stride2;
    long long _format;
    NSData *_plane0;
    NSData *_plane1;
    NSData *_plane2;
    long long _pts;
    long long _nativeBuffer;
}

+ (id)VideoFrameWithFormat:(long long)arg1 width:(int)arg2 height:(int)arg3 stride0:(int)arg4 stride1:(int)arg5 stride2:(int)arg6 plane0:(id)arg7 plane1:(id)arg8 plane2:(id)arg9 pts:(long long)arg10 nativeBuffer:(long long)arg11;
@property(readonly, nonatomic) long long nativeBuffer; // @synthesize nativeBuffer=_nativeBuffer;
@property(readonly, nonatomic) long long pts; // @synthesize pts=_pts;
@property(readonly, nonatomic) NSData *plane2; // @synthesize plane2=_plane2;
@property(readonly, nonatomic) NSData *plane1; // @synthesize plane1=_plane1;
@property(readonly, nonatomic) NSData *plane0; // @synthesize plane0=_plane0;
@property(readonly, nonatomic) int stride2; // @synthesize stride2=_stride2;
@property(readonly, nonatomic) int stride1; // @synthesize stride1=_stride1;
@property(readonly, nonatomic) int stride0; // @synthesize stride0=_stride0;
@property(readonly, nonatomic) int height; // @synthesize height=_height;
@property(readonly, nonatomic) int width; // @synthesize width=_width;
@property(readonly, nonatomic) long long format; // @synthesize format=_format;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFormat:(long long)arg1 width:(int)arg2 height:(int)arg3 stride0:(int)arg4 stride1:(int)arg5 stride2:(int)arg6 plane0:(id)arg7 plane1:(id)arg8 plane2:(id)arg9 pts:(long long)arg10 nativeBuffer:(long long)arg11;

@end

