//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBloopsChatMediaContentProvider.h"

@class NSString, SPScenario, UIImage;

@interface SCBloopsResultProvider : NSObject <SCBloopsChatMediaContentProvider>
{
    UIImage *_thumbnail;
    SPScenario *_scenario;
    struct CGSize _size;
}

- (void).cxx_destruct;
- (id)snapMetadata;
- (id)creatorAttribution;
- (_Bool)isInfiniteDuration;
- (id)venueId;
- (id)snapAttachmentUrl;
- (id)chatIV;
- (id)chatKey;
- (id)chatMediaID;
- (double)duration;
- (id)miniThumbnailData;
- (_Bool)isZipped;
- (double)height;
- (double)width;
- (id)groupIdToMediaIdDownloadUrlMap;
- (long long)mediaContentType;
- (void)uploadWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)needsToBeUploaded;
- (void)prepareDataToUploadForMediaId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSString *numericBloopdId;
@property(readonly, nonatomic) NSString *bloopdId;
@property(readonly, nonatomic) _Bool hasCustomText;
- (id)initWithScenarioModel:(id)arg1 thumbnail:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

