//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface SCDiscoverFeedSectionExtensionServices : NSObject
{
    NSDictionary *_collectionViewSectionCreators;
    NSDictionary *_localSectionDescriptorProviders;
    NSDictionary *_remoteSectionProviders;
    NSDictionary *_loggingParsers;
    NSDictionary *_dataMutators;
}

@property(readonly, nonatomic) NSDictionary *dataMutators; // @synthesize dataMutators=_dataMutators;
@property(readonly, nonatomic) NSDictionary *loggingParsers; // @synthesize loggingParsers=_loggingParsers;
@property(readonly, nonatomic) NSDictionary *remoteSectionProviders; // @synthesize remoteSectionProviders=_remoteSectionProviders;
@property(readonly, nonatomic) NSDictionary *localSectionDescriptorProviders; // @synthesize localSectionDescriptorProviders=_localSectionDescriptorProviders;
@property(readonly, nonatomic) NSDictionary *collectionViewSectionCreators; // @synthesize collectionViewSectionCreators=_collectionViewSectionCreators;
- (void).cxx_destruct;
- (id)initWithSectionExtensions:(id)arg1;

@end
