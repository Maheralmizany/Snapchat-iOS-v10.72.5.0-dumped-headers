//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCFrameSource.h"

@class NSString;

@interface SCImageFrameSource : NSObject <SCFrameSource>
{
    struct __CVBuffer *_pixelBuffer;
    double _startPlayHostTime;
    double _itemTimePlayOffset;
    _Bool _isPlaying;
    _Bool didProcessFirstFrame;
    double _rate;
    long long _renderOrientation;
    id <SCImageFrameSourceDelegate> _delegate;
    CDStruct_1b6d18a9 _itemTimeStartOffset;
    CDStruct_1b6d18a9 _duration;
}

@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <SCImageFrameSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didProcessFirstFrame; // @synthesize didProcessFirstFrame;
@property(nonatomic) long long renderOrientation; // @synthesize renderOrientation=_renderOrientation;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(nonatomic) CDStruct_1b6d18a9 itemTimeStartOffset; // @synthesize itemTimeStartOffset=_itemTimeStartOffset;
- (void).cxx_destruct;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (struct __CVBuffer *)acquirePixelBufferForItemTime:(CDStruct_1b6d18a9)arg1 itemTimeForDisplay:(CDStruct_1b6d18a9 *)arg2;
- (_Bool)hasNewPixelBufferForItemTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (_Bool)isSourceReady;
- (CDStruct_e83c9415)itemTimeRange;
- (void)cancelReading;
- (void)startReading;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 imageOrientation:(long long)arg2 duration:(CDStruct_1b6d18a9)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

