//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SCGallerySnapGroupViewModelBuilder : NSObject
{
    NSString *_dateRange;
    NSString *_locationName;
    NSArray *_cellViewModels;
}

+ (id)withGallerySnapGroupViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)setCellViewModels:(id)arg1;
- (id)setLocationName:(id)arg1;
- (id)setDateRange:(id)arg1;
- (id)build;

@end
