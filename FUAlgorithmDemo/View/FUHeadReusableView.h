//
//  FUHeadReusableView.h
//  FUAlgorithmDemo
//
//  Created by 孙慕 on 2020/5/21.
//  Copyright © 2020 孙慕. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface FUHeadReusableView : UICollectionReusableView
@property (strong, nonatomic) UIImageView *mImageView;
@property (strong, nonatomic) UILabel *titleLabel;

@end

NS_ASSUME_NONNULL_END
