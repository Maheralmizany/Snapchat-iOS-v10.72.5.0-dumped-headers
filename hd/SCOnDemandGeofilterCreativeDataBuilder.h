//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SOJUUnlockablesOndemandTemplate;

@interface SCOnDemandGeofilterCreativeDataBuilder : NSObject
{
    SOJUUnlockablesOndemandTemplate *_geofilterTemplate;
    NSArray *_textBoxMetadata;
    NSArray *_stickerMetadata;
    NSString *_draftId;
}

+ (id)withOnDemandGeofilterCreativeData:(id)arg1;
- (void).cxx_destruct;
- (id)setDraftId:(id)arg1;
- (id)setStickerMetadata:(id)arg1;
- (id)setTextBoxMetadata:(id)arg1;
- (id)setGeofilterTemplate:(id)arg1;
- (id)build;

@end
