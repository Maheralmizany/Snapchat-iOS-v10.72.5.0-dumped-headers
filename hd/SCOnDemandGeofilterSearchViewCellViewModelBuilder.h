//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface SCOnDemandGeofilterSearchViewCellViewModelBuilder : NSObject
{
    NSString *_imageKey;
    NSAttributedString *_address;
    NSString *_region;
    NSString *_distance;
}

+ (id)withOnDemandGeofilterSearchViewCellViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)setDistance:(id)arg1;
- (id)setRegion:(id)arg1;
- (id)setAddress:(id)arg1;
- (id)setImageKey:(id)arg1;
- (id)build;

@end
