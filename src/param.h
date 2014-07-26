#ifndef GBDT_PARAM_H
#define GBDT_PARAM_H

#include <stddef.h>
#include <string>

struct TreeParam
{
    int verbose;

    size_t max_level;
    size_t max_leaf_number;
    size_t max_x_values_number;
    double leaf_threshold;
    size_t min_values_in_leaf;

    size_t gbdt_tree_number;
    double gbdt_learning_rate;
    double gbdt_sample_rate;
    std::string gbdt_loss;

    std::string training_sample;
    std::string training_sample_format;
    std::string model;

    TreeParam() {}
};

int parse_tree_param(int argc, char ** argv, TreeParam * param);

#endif// GBDT_PARAM_H
