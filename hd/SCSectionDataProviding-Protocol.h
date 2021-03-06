//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCEventAnnouncing.h"

@class NSArray, NSDictionary, NSObject<NSCopying>;

@protocol SCSectionDataProviding <SCEventAnnouncing>
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate;
- (NSDictionary *)contentCellClassesByReuseIdentifier;
- (NSArray *)containerCellViewModelsForIndexPaths:(NSArray *)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;

@optional
- (long long)experimentalPagingMode;
- (_Bool (^)(id, id))modelCanUpdateComparator;
- (double)minimumInteritemSpacing;
- (NSDictionary *)supplementaryViewModels;
- (NSDictionary *)configurationBlocksByReuseIdentifier;
- (long long)dataLoadingStatus;
- (void)tearDown;
- (void)setUp;
- (unsigned long long)numberOfSections;
@end

