//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPFaceDetector.h"

@class CIDetector, NSObject<OS_dispatch_queue>, NSString;

@interface SPFaceDetectorCI : NSObject <SPFaceDetector>
{
    NSObject<OS_dispatch_queue> *_queue;
    CIDetector *_faceDetector;
}

@property(retain, nonatomic) CIDetector *faceDetector; // @synthesize faceDetector=_faceDetector;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)maxFaceInImage:(id)arg1;
- (id)facesInImage:(id)arg1 error:(id *)arg2;
- (id)initWithMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

