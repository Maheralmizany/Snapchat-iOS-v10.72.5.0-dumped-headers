//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCMediaRenderedLowResUpload : NSObject
{
    id <SCPerforming> _performer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)updateThumbnailForSnapId:(id)arg1 dataToUpload:(id)arg2 networker:(id)arg3 uploadLogger:(id)arg4 callbackQueue:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)resumeUploadRenderedLowresMediaWithURL:(id)arg1 snap:(id)arg2 renderedLowresMediaData:(id)arg3 networker:(id)arg4 logger:(id)arg5 additionalHTTPHeaders:(id)arg6 callbackQueue:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (id)init;

@end
