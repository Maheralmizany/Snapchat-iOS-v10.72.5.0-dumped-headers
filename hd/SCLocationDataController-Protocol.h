//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSObject.h"

@class CLLocation, NSDictionary;

@protocol SCLocationDataController <NSCoding, NSObject>
@property(nonatomic) __weak id <SCLocationDataControllerDelegate> delegate;
- (void)clearCache;
- (void)updateCacheWithLocation:(CLLocation *)arg1 newSession:(_Bool)arg2;
- (void)processResponse:(NSDictionary *)arg1 location:(CLLocation *)arg2;
@end

