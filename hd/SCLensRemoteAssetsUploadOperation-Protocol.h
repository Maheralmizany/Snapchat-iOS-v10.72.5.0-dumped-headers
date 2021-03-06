//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"

@protocol SCLensRemoteAssetsUploadOperation <NSCoding>
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) unsigned long long state;
@property(nonatomic) __weak id <SCLensRemoteAssetsUploadOperationDelegate> delegate;
- (void)invalidate;
- (void)awakeFromCoder;
- (void)start;
- (void)removeListener:(id <SCLensRemoteAssetsUploadOperationListener>)arg1;
- (_Bool)addListener:(id <SCLensRemoteAssetsUploadOperationListener>)arg1;
@end

