//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SCMapSearchGenericCellViewModelProvider : NSObject
{
    NSArray *_viewModels;
    id <SCMapSearchGenericCellViewModelProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCMapSearchGenericCellViewModelProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *viewModels; // @synthesize viewModels=_viewModels;
- (void).cxx_destruct;
- (id)initWithViewModels:(id)arg1;

@end
