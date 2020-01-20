//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLensDownloadableContent.h"

#import "SCTraceEnabled.h"

@class NSString;

@interface SCLensLocalDownloadableContent : SCLensDownloadableContent <SCTraceEnabled>
{
}

- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)fileNames;
- (void)remove;
- (_Bool)isContentAvailable;
- (_Bool)shouldValidateChecksum;
- (id)faceTrackingResourcesChecksum;
- (id)faceTrackingResourcesPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

