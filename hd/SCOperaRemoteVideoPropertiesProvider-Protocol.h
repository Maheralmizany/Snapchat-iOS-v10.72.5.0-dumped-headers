//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol SCOperaRemoteVideoPropertiesProvider
- (void)fetchPropertiesWithContext:(NSDictionary *)arg1 listener:(id <SCOperaRemoteVideoPropertiesListener>)arg2;
- (NSDictionary *)propertiesForVideoId:(NSString *)arg1;
@end
