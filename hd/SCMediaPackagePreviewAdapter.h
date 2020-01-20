//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMediaPackagePreviewAdapting.h"

@class NSString;

@interface SCMediaPackagePreviewAdapter : NSObject <SCMediaPackagePreviewAdapting>
{
    id <SCMediaPackageManaging> _mediaPackageManager;
}

- (void).cxx_destruct;
- (void)createMediaPackageWithPreviewBlob:(id)arg1 extraParams:(id)arg2 previewConfiguration:(id)arg3 callbackPerformer:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithMediaPackageManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

