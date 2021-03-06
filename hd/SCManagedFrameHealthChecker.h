//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCManagedFrameHealthChecker : NSObject
{
    id <SCPerforming> _performer;
    id <SCManiphestTicketCreator> _ticketCreator;
}

- (void).cxx_destruct;
- (void)_logEventWithSnapHealthInfo:(long long)arg1 captureSessionId:(id)arg2 healthCheckType:(unsigned long long)arg3 metadata:(id)arg4;
- (id)_getFrameHealthInfoForImage:(id)arg1 withSourceType:(unsigned long long)arg2;
- (id)_downscaledImageWithInputImage:(id)arg1;
- (void)_checkHealthForImage:(id)arg1 withCaptureSessionId:(id)arg2 sourceType:(unsigned long long)arg3 metadata:(id)arg4;
- (void)checkVideoSnapHealthForPostTranscodingThumbnailImage:(id)arg1 withCaptureSessionId:(id)arg2 metedata:(id)arg3;
- (void)checkVideoSnapHealthForOverlayImage:(id)arg1 withCaptureSessionId:(id)arg2 metedata:(id)arg3;
- (void)checkVideoSnapHealthForFirstFrameImage:(id)arg1 withCaptureSessionId:(id)arg2 metedata:(id)arg3;
- (void)checkImageSnapHealthForPostTranscodingImageData:(id)arg1 withCaptureSessionId:(id)arg2 metadata:(id)arg3;
- (void)checkImageSnapHealthForPreTranscodingImage:(id)arg1 withCaptureSessionId:(id)arg2 metadata:(id)arg3;
- (void)checkImageSnapHealthForCapturedImage:(id)arg1 withCaptureSessionId:(id)arg2 metadata:(id)arg3;
- (id)initWithTicketCreator:(id)arg1;

@end

