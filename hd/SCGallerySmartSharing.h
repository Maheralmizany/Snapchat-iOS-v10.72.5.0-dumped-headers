//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCUserSession;

@interface SCGallerySmartSharing : NSObject
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_showSmartSharingToastForDestination:(long long)arg1 success:(_Bool)arg2;
- (id)_fetchOriginalSnapIfNeeded:(id)arg1;
- (void)smartUploadWithMediaId:(id)arg1 gallerySnap:(id)arg2 key:(id)arg3 IV:(id)arg4 destination:(id)arg5 orientation:(id)arg6 callbackQueue:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
- (_Bool)isEligibleForSmartSharing:(id)arg1;
- (id)initWithUserSession:(id)arg1;

@end

