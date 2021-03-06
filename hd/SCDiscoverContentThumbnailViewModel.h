//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMediaContentThumbnailViewModel.h"

#import "SCDiscoverMediaThumbnailViewModel.h"

@class SCDiscoverBarContents, SCDiscoverMediaBlobMetadata;

@interface SCDiscoverContentThumbnailViewModel : SCMediaContentThumbnailViewModel <SCDiscoverMediaThumbnailViewModel>
{
    SCDiscoverBarContents *_discoverBarContents;
    SCDiscoverMediaBlobMetadata *_discoverMetadata;
}

+ (id)uniqueNameFromPublisherName:(id)arg1;
+ (id)discoverMetadataFromDictionary:(id)arg1;
@property(retain, nonatomic) SCDiscoverMediaBlobMetadata *discoverMetadata; // @synthesize discoverMetadata=_discoverMetadata;
- (void).cxx_destruct;
- (id)discoverMediaBlobMetadata;
- (id)discoverBarContentsToDisplay;
- (_Bool)shouldDisplayDiscoverBar;
- (void)saveDiscoverBarContents:(id)arg1;
- (void)unarchiveDiscoverMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithMediaContent:(id)arg1 mediaMetadata:(id)arg2 metadataDict:(id)arg3;

@end

