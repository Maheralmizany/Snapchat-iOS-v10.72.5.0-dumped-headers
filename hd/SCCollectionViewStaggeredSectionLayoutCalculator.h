//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCollectionViewSectionLayoutProviding.h"

@class NSString, SCCornerRadii;

@interface SCCollectionViewStaggeredSectionLayoutCalculator : NSObject <SCCollectionViewSectionLayoutProviding>
{
    unsigned long long _numberOfColumns;
    id <SCCollectionViewSectionLayoutProvidingDataSource> _dataSource;
    SCCornerRadii *_cornerRadii;
}

@property(retain, nonatomic) SCCornerRadii *cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) __weak id <SCCollectionViewSectionLayoutProvidingDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)layoutAttributesForSectionOriginPoint:(struct CGPoint)arg1 sectionWidth:(double)arg2 minimumInteritemSpacing:(double)arg3 numberOfItems:(unsigned long long)arg4;
- (id)initWithSectionColumns:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
