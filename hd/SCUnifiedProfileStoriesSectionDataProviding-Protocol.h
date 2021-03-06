//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCUnifiedProfileListCellViewModel;

@protocol SCUnifiedProfileStoriesSectionDataProviding <NSObject>
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer;
@property(nonatomic) __weak id <SCUnifiedProfileStoriesSectionDataProvidingDelegate> dataProviderDelegate;
- (unsigned long long)viewMoreExpansionIncrementThreshold;
- (unsigned long long)viewMoreExpansionThreshold;
- (NSString *)storySectionIdentifier;
- (void (^)(UICollectionViewCell<SCViewModelConfigurable> *))configurationBlockForStoriesListViewCell;
- (void (^)(UICollectionViewCell<SCViewModelConfigurable> *))configurationBlockForStoriesCell;
- (NSArray *)storyListViewCellViewModels;
- (SCUnifiedProfileListCellViewModel *)storiesCellViewModel;

@optional
- (Class)storiesCellClass;
@end

