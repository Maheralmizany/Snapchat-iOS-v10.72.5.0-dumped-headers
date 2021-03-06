//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSError, NSURL, SCBatchCaptureImageSegment, SCVideoTranscodingSession;

@interface SCBatchCaptureImageSegmentExportOperation : NSOperation
{
    SCVideoTranscodingSession *_transcodingSession;
    NSError *_error;
    SCBatchCaptureImageSegment *_imageSegment;
    NSURL *_outputURL;
}

@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(retain, nonatomic) SCBatchCaptureImageSegment *imageSegment; // @synthesize imageSegment=_imageSegment;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithSegment:(id)arg1 outputURL:(id)arg2;

@end

