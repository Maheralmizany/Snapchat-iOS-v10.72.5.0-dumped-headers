//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCBloopsAPIListener <NSObject>

@optional
- (void)bloopsAPIDidResetPersonsSource:(id <SCBloopsAPI>)arg1;
- (void)bloopsAPI:(id <SCBloopsAPI>)arg1 didChangeBloopsConfigUrlPath:(NSString *)arg2;
- (void)bloopsAPI:(id <SCBloopsAPI>)arg1 didChangeBloopsPreviewsResourcesStatus:(_Bool)arg2;
- (void)bloopsAPI:(id <SCBloopsAPI>)arg1 didChangeBloopsFeatureStatus:(_Bool)arg2;
@end

