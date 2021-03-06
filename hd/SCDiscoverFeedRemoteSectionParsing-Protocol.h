//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDiscoverFeedSection, SCDiscoverFeedSectionMetadata, SCSSMStoriesResponse, SCSearchResultSectionDescriptor;

@protocol SCDiscoverFeedRemoteSectionParsing <NSObject>
- (SCSearchResultSectionDescriptor *)remoteSectionDescriptorWithSectionMetadata:(SCDiscoverFeedSectionMetadata *)arg1;
- (SCDiscoverFeedSectionMetadata *)parseSectionMetadataWithResponse:(SCSSMStoriesResponse *)arg1;

@optional
- (SCSearchResultSectionDescriptor *)remoteSectionDescriptorWithSection:(SCDiscoverFeedSection *)arg1;
@end

